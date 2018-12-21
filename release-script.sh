#!/bin/sh


# Exit script if you try to use an uninitialized variable.
set -o nounset

# Exit script if a statement returns a non-true return value.
set -o errexit

# Use the error status of the first failure, rather than that of the last item in a pipeline.
set -o pipefail

tag_name=$(bundle exec fastlane run version_get_podspec path:"LMGRemoteData.podspec" | grep "Result: " | awk '{print $3}' | sed -E "s/[[:cntrl:]]\[[0-9]{1,3}m//g")

if [ $(git tag -l "$tag_name") ]; then
  echo "Release of LMGRemoteData ${tag_name} already exists"
  exit 0
fi

git config user.email "buildbot@getintheloop.ca"
git config user.name "GITL-Buildbot"
git tag ${tag_name}
git push https://${GH_TOKEN}@github.com/loopmediagroup/loopmediagroup-ios-graphql-client.git master --tags

pod setup
pod trunk push LMGRemoteData.podspec --allow-warnings
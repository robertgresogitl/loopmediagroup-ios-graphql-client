
# Be sure to run `pod lib lint LMGData.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LMGRemoteData'
  s.version          = '1.0.23'
  s.summary          = 'Remote data layer for the LMG iOS SDK'
  s.description      = <<-DESC
Implements the remote data objects for the LMG iOS SDK.
                       DESC

  s.homepage         = 'https://github.com/loopmediagroup/loopmediagroup-ios-graphql-client'
  s.license          = { :type => 'Copyright', :file => 'LICENSE' }
  s.author           = { 'Loop Media Group' => 'dev@loopmediagroup.com' }
  s.source           = { :git => 'https://github.com/loopmediagroup/loopmediagroup-ios-graphql-client.git', :tag => String(s.version) }

  s.ios.deployment_target = '9.0'
  s.swift_version = '4.2'
  s.source_files = 'LMGRemoteData/Classes/**/*.{swift}'

  s.dependency 'LMGDataAccess', '~> 1.0.14'
  s.dependency 'LMGNotificationBus', '~> 1.0.9'
  s.dependency 'Apollo', '~> 0.9.1'
end

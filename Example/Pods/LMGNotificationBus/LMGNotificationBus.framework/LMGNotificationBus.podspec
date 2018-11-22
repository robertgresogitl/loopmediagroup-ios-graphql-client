#
# Be sure to run `pod lib lint LMGData.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LMGNotificationBus'
  s.version          = '1.0.0'
  s.summary          = 'Notification Bus layer for the LMG iOS SDK'
  s.description      = <<-DESC
Implements the notification bus for the LMG iOS SDK.
                       DESC

  s.homepage         = 'https://github.com/loopmediagroup/loopmediagroup-ios'
  s.license          = { :type => 'Copyright', :file => 'LICENSE' }
  s.author           = { 'Loop Media Group' => 'dev@loopmediagroup.com' }
  s.source           = { :http => 'https://github.com/loopmediagroup/loopmediagroup-ios/releases/download/NotificationBus-v'+String(s.version)+'/LMGNotificationBus.zip' }

  s.ios.deployment_target = '9.0'
  s.source_files = 'LMGNotificationBus.framework/Headers/*.{h}'
  s.preserve_paths = 'LMGNotificationBus.framework'
  s.vendored_frameworks = 'LMGNotificationBus.framework'

  s.dependency 'LMGDomain'
  
  # These are automatically exported in the umbrella.h
  s.public_header_files = [
    'LMGNotificationBus.framework/Headers/*.{h}'
  ]
end

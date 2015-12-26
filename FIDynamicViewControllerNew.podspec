#
# Be sure to run `pod lib lint FIDynamicViewController.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "FIDynamicViewControllerNew"
  s.version          = "1.5.1"
  s.summary          = "Frameworks to create dynamic complex view controller"
  s.description      = <<-DESC
                       FIDynamicViewController built makes it easy to create a dynamic and flexible view controller with its contents.
For example, when you want to create a view controller with the components within it are loaded depends on a particular configuration.
                       DESC
  s.homepage         = "https://github.com/congncif/FIDynamicViewControllerNew"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "NGUYEN CHI CONG" => "congnc.if@gmail.com" }
  s.source           = { :git => "https://github.com/congncif/FIDynamicViewControllerNew.git", :tag => s.version.to_s }
    s.social_media_url = 'https://twitter.com/congncif'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  #s.source_files = 'Pod/Classes/**/*'
  s.resource_bundles = {
    'FIDynamicViewController' => ['Pod/Assets/*.png']
  }

#s.public_header_files = 'Pod/Classes/**/*.h'
    s.frameworks = 'UIKit', 'CoreGraphics'
  # s.dependency 'AFNetworking', '~> 2.3'
    s.ios.vendored_frameworks  = 'Pod/FIDynamicViewController.framework'
end

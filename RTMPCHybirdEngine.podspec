#
#  Be sure to run `pod spec lint RTMPCHybirdEngine.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = 'RTMPCHybirdEngine'
  s.version      = '1.0.3'
  s.summary      = '直播连麦SDK,RTMPCHybirdEngine -iOS'

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description  = <<-DESC
  　　　　　　　　　　　　RTMPCHybirdEngine 是anyRTC直播连麦的iOS SDK
                   DESC

  s.homepage     = 'https://github.com/BoYuanZjq/RTMPCHybirdEngine'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author             = { 'zzuzjq' => '984630262@qq.com' }
  s.source       = { :git => 'https://github.com/BoYuanZjq/RTMPCHybirdEngine.git', :tag => 'v1.0.3' }

 s.ios.deployment_target = '8.0'


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #
  # s.vendored_frameworks = "RTMPCHybirdEngine.framework"
  # s.vendored_frameworks = 'RTMPCHybirdEngine.framework'
  # s.source_files  = "RTMPCHybirdEngine", "RTMPCHybirdEngine/**/*.h"
  s.source_files  =  'RTMPCHybirdEngine/**/*.{h,m}'

  # s.exclude_files = "Classes/Exclude"

  #s.public_header_files =  "RTMPCHybirdEngine/**/*.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # s.framework  = "SomeFramework"
  s.frameworks =  'AVFoundation','AudioToolbox','VideoToolbox','CoreMedia','OpenGLES'

  # s.library   = "libiconv"
  #s.libraries = "iconv","libiconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end

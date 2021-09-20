0x0000003d050 AXAuditScreenshotManager : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 @"NSString" _lastTimestamp (0x8)
	+0x0010 @"NSMutableDictionary" __image (0x8)
	+0x0018 @"NSMutableDictionary" __rotation (0x8)
	+0x0020 @"NSMutableDictionary" __displayBounds (0x8)
	+0x0028 @"NSMutableDictionary" __borderFrame (0x8)
	+0x0030 @"NSMutableDictionary" __scaleFactor (0x8)
	+0x0038 @"NSMutableDictionary" __shouldFlipOutline (0x8)
}
 @property (strong, nonatomic) NSMutableDictionary *_image
 @property (strong, nonatomic) NSMutableDictionary *_rotation
 @property (strong, nonatomic) NSMutableDictionary *_displayBounds
 @property (strong, nonatomic) NSMutableDictionary *_borderFrame
 @property (strong, nonatomic) NSMutableDictionary *_scaleFactor
 @property (strong, nonatomic) NSMutableDictionary *_shouldFlipOutline
 @property (strong, nonatomic) NSString *lastTimestamp

  // class methods
  0x00000010ab4 +(id)sharedManager
  0x00000012618 +(id)imageProcessingQueue
  0x00000012688 +(id)imageFromRemoteImageData:(id)arg1 rotation:(SEL)arg2 

  // instance methods
  0x00000010b50 -(id)init
  0x00000010c94 -(void)clear
  0x00000010da8 -(void)addScreenshot:(id)arg1 forTimestamp:(SEL)arg2 
  0x00000010e50 -(void)setScreenshotRotation:(id)arg1 forTimestamp:(SEL)arg2 
  0x00000010f04 -(void)setScreenshotDisplayBounds:(id)arg1 forTimestamp:(SEL)arg2 
  0x00000010fd8 -(void)setScreenshotBorderFrame:(id)arg1 forTimestamp:(SEL)arg2 
  0x000000110ac -(void)setScreenshotScaleFactor:(id)arg1 forTimestamp:(SEL)arg2 
  0x00000011160 -(void)setScreenshotShouldFlipOutline:(id)arg1 forTimestamp:(SEL)arg2 
  0x00000011214 -(id)screenshotImageForTimestamp:(id)arg1 
  0x00000011294 -(double)screenshotRotationForTimestamp:(id)arg1 
  0x00000011344 -({CGRect={CGPoint=dd}{CGSize=dd}})screenshotDisplayBoundsForTimestamp:(id)arg1 
  0x00000011420 -({CGRect={CGPoint=dd}{CGSize=dd}})screenshotBorderFrameForTimestamp:(id)arg1 
  0x000000114fc -(double)screenshotScaleFactorForTimestamp:(id)arg1 
  0x000000115ac -(BOOL)screenshotShouldFlipOutlineForTimestamp:(id)arg1 
  0x00000011654 -({CGRect={CGPoint=dd}{CGSize=dd}})_elementBoundsForIssue:(id)arg1 containerImageSize:(SEL)arg2 
  0x0000001173c -({CGRect={CGPoint=dd}{CGSize=dd}})_boundsForRect:(id)arg1 containerImageSize:(SEL)arg2 timestamp:({CGRect={CGPoint=dd}{CGSize=dd}})arg3 
  0x00000011994 -(void)addScreenshotWithInfo:(id)arg1 timestamp:(SEL)arg2 completion:(id)arg3 
  0x00000011f70 -({CGRect={CGPoint=dd}{CGSize=dd}})elementBoundsInScreenShotForIssue:(id)arg1 
  0x00000012078 -(id)screenshotForIssue:(id)arg1 elementRect:(SEL)arg2 
  0x00000012154 -(id)screenshotHighlightingIssue:(id)arg1 
  0x0000001238c -(id)thumbnailImageOfIssue:(id)arg1 
  0x0000001244c -(id)screenshotImageForTimestamp:(id)arg1 inRect:(SEL)arg2 
  0x00000012918 -(id)lastTimestamp
  0x00000012920 -(void)setLastTimestamp:(id)arg1 
  0x0000001292c -(id)_image
  0x00000012934 -(void)set_image:(id)arg1 
  0x00000012940 -(id)_rotation
  0x00000012948 -(void)set_rotation:(id)arg1 
  0x00000012954 -(id)_displayBounds
  0x0000001295c -(void)set_displayBounds:(id)arg1 
  0x00000012968 -(id)_borderFrame
  0x00000012970 -(void)set_borderFrame:(id)arg1 
  0x0000001297c -(id)_scaleFactor
  0x00000012984 -(void)set_scaleFactor:(id)arg1 
  0x00000012990 -(id)_shouldFlipOutline
  0x00000012998 -(void)set_shouldFlipOutline:(id)arg1 
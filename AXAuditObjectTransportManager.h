0x0000003d1e0 AXAuditObjectTransportManager : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 B _enforceSecureTransport (0x1)
	+0x0010 @"NSMutableDictionary" __keyToTransportInfo (0x8)
	+0x0018 @"NSMutableArray" __transportInfoEncodeOnly (0x8)
}
 @property (strong, nonatomic) NSMutableDictionary *_keyToTransportInfo
 @property (strong, nonatomic) NSMutableArray *_transportInfoEncodeOnly
 @property (nonatomic) BOOL enforceSecureTransport

  // class methods
  0x00000013f2c +(id)sharedManager

  // instance methods
  0x00000013fc8 -(id)init
  0x00000014058 -(void)_registerKnownClasses
  0x00000014238 -(void)registerTransportableClass:(id)arg1 
  0x00000014250 -(id)transportDictionaryForObject:(id)arg1 
  0x0000001484c -(id)objectForTransportDictionary:(id)arg1 expectedClass:(SEL)arg2 
  0x00000014da4 -(id)transportArrayForArray:(id)arg1 
  0x00000014f5c -(id)arrayForTransportArray:(id)arg1 expectedClass:(SEL)arg2 
  0x0000001513c -(id)_transportInfoEncodeOnlyForObject:(id)arg1 
  0x000000152c4 -(id)_transportInfoForObject:(id)arg1 
  0x00000015470 -(void)registerTransportInfoMasquerade:(id)arg1 encodeOnly:(SEL)arg2 
  0x00000015750 -(void)registerTransportInfoPropertyBased:(id)arg1 
  0x000000157e0 -(void)_validateTransportObjectIfNeeded:(id)arg1 
  0x00000015834 -(BOOL)validateSupportedConnectionSecureTransport:(id)arg1 
  0x00000015d84 -(BOOL)enforceSecureTransport
  0x00000015d8c -(void)setEnforceSecureTransport:(id)arg1 
  0x00000015d94 -(id)_keyToTransportInfo
  0x00000015d9c -(void)set_keyToTransportInfo:(id)arg1 
  0x00000015da8 -(id)_transportInfoEncodeOnly
  0x00000015db0 -(void)set_transportInfoEncodeOnly:(id)arg1 
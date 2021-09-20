0x0000003d460 AXAuditObjectTransportInfoMasquerade : AXAuditObjectTransportInfo
{
	+0x0030 # _masqueradeAsClass (0x8)
	+0x0038 @"AXAuditObjectTransportInfo" _masqueradeTransportInfo (0x8)
	+0x0040 @? _createMasqueradeObjectBlock (0x8)
	+0x0048 @? _createLocalObjectWithMasqueradeObjectBlock (0x8)
}
 @property (strong, nonatomic) Class masqueradeAsClass
 @property (strong, nonatomic) AXAuditObjectTransportInfo *masqueradeTransportInfo
 @property (copy, nonatomic) @? createMasqueradeObjectBlock
 @property (copy, nonatomic) @? createLocalObjectWithMasqueradeObjectBlock

  // instance methods
  0x0000001d728 -(id)init
  0x0000001d794 -(void)_initializeBlocks
  0x0000001dae4 -(Class)masqueradeAsClass
  0x0000001daf4 -(void)setMasqueradeAsClass:(id)arg1 
  0x0000001db08 -(id)masqueradeTransportInfo
  0x0000001db18 -(void)setMasqueradeTransportInfo:(id)arg1 
  0x0000001db2c -(@?)createMasqueradeObjectBlock
  0x0000001db3c -(void)setCreateMasqueradeObjectBlock:(id)arg1 
  0x0000001db48 -(@?)createLocalObjectWithMasqueradeObjectBlock
  0x0000001db58 -(void)setCreateLocalObjectWithMasqueradeObjectBlock:(id)arg1 
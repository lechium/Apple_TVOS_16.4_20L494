//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANSTv1
{
}

+ (id)filterThresholds;	// IMP=0x00800000000fe436
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000fe425
+ (id)supportedLabelKeys;	// IMP=0x00800000000fe3c2
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000ff18b
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000ff0b6
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fef2a
- (id)modifySmallFaceThrehold:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fe57c
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000fe527
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000fe4d2

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANODv4
{
}

+ (id)filterThresholds;	// IMP=0x00800000000fdcd4
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000fdcc3
+ (id)supportedLabelKeys;	// IMP=0x00800000000fdc60
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000fe047
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000fdf72
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fde1a
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000fddc5
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000fdd70

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface VNStatefulRequestConfiguration
{
    NSUUID *_requestUUID;	// 8 = 0x8
    CDStruct_1b6d18a9 _frameAnalysisSpacing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001cd9e0
@property(readonly) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
@property CDStruct_1b6d18a9 frameAnalysisSpacing; // @synthesize frameAnalysisSpacing=_frameAnalysisSpacing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cd90b
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001cd89e

@end


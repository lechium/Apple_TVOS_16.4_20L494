//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNBackbone : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    NSArray *_outputNames;	// 16 = 0x10
    float *_outputBeforeFc;	// 24 = 0x18
    float *_outputBeforeSpatiialPooling;	// 32 = 0x20
    float *_outputRes4;	// 40 = 0x28
    float *_outputBeforeTemporalPooling;	// 48 = 0x30
}

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;	// IMP=0x00600000000eec2d
- (void).cxx_destruct;	// IMP=0x00000000000ef222
@property(readonly) float *outputBeforeTemporalPooling; // @synthesize outputBeforeTemporalPooling=_outputBeforeTemporalPooling;
@property(readonly) float *outputRes4; // @synthesize outputRes4=_outputRes4;
@property(readonly) float *outputBeforeSpatiialPooling; // @synthesize outputBeforeSpatiialPooling=_outputBeforeSpatiialPooling;
@property(readonly) float *outputBeforeFc; // @synthesize outputBeforeFc=_outputBeforeFc;
- (int)inference:(float *)arg1;	// IMP=0x00000000000ef109
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000000eede4

@end


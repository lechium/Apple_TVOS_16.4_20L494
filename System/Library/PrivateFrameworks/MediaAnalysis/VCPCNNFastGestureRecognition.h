//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNFastGestureRecognition : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)detector;	// IMP=0x00600000001c83e0
- (void).cxx_destruct;	// IMP=0x00000000001c8757
- (int)gestureDetection:(id)arg1 score:(float *)arg2;	// IMP=0x00000000001c86f5
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x00000000001c86ed
- (int)getDetectionScore:(float *)arg1;	// IMP=0x00000000001c8643
- (int)createInput:(float *)arg1 keypoints:(id)arg2;	// IMP=0x00000000001c845a
- (int)planDestroy;	// IMP=0x00000000001c8452
- (void)dealloc;	// IMP=0x00000000001c83a1
- (id)init;	// IMP=0x00000000001c7dce

@end

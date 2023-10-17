//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNBlurSignature : NSObject
{
    void *_signatureData;	// 8 = 0x8
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00600000000531a3
- (void *)getSignatureData;	// IMP=0x0000000000053199
- (void)setSignatureData:(void *)arg1;	// IMP=0x000000000005318f
- (id)initWithSignatureData:(void *)arg1;	// IMP=0x0000000000053152
- (void)dealloc;	// IMP=0x0000000000053103

@end


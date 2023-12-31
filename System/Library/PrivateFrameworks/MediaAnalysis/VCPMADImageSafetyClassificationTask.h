//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADImageSafetyClassificationRequest, NSString, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADImageSafetyClassificationTask : NSObject
{
    MADImageSafetyClassificationRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    struct atomic<bool> _canceled;	// 32 = 0x20
}

+ (id)dependencies;	// IMP=0x001000000005367b
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0010000000053492
- (void).cxx_destruct;	// IMP=0x00000000000542b7
- (int)run;	// IMP=0x00000000000536af
- (void)logMemoryWithMessage:(id)arg1;	// IMP=0x00000000000536a9
- (void)cancel;	// IMP=0x000000000005369e
- (_Bool)autoCancellable;	// IMP=0x0000000000053696
- (float)resourceRequirement;	// IMP=0x0000000000053688
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00000000000533b7

@end


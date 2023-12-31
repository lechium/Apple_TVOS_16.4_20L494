//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface IXProgressHint : NSObject
{
    NSNumber *_compressedAppAssetSizeInBytes;	// 8 = 0x8
    NSNumber *_uncompressedAppAssetSizeInBytes;	// 16 = 0x10
    NSNumber *_filesInAppAssetCount;	// 24 = 0x18
    NSNumber *_totalODRAssetSizeInBytes;	// 32 = 0x20
    NSNumber *_totalExpectedEssentialAssetSizeInBytes;	// 40 = 0x28
    NSNumber *_loadingPhaseProportion;	// 48 = 0x30
    NSNumber *_installingPhaseProportion;	// 56 = 0x38
    NSNumber *_postProcessingPhaseProportion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005e27
- (void).cxx_destruct;	// IMP=0x00200000000071c1
@property(readonly, nonatomic) NSNumber *postProcessingPhaseProportion; // @synthesize postProcessingPhaseProportion=_postProcessingPhaseProportion;
@property(readonly, nonatomic) NSNumber *installingPhaseProportion; // @synthesize installingPhaseProportion=_installingPhaseProportion;
@property(readonly, nonatomic) NSNumber *loadingPhaseProportion; // @synthesize loadingPhaseProportion=_loadingPhaseProportion;
@property(retain, nonatomic) NSNumber *totalExpectedEssentialAssetSizeInBytes; // @synthesize totalExpectedEssentialAssetSizeInBytes=_totalExpectedEssentialAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *totalODRAssetSizeInBytes; // @synthesize totalODRAssetSizeInBytes=_totalODRAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *filesInAppAssetCount; // @synthesize filesInAppAssetCount=_filesInAppAssetCount;
@property(retain, nonatomic) NSNumber *uncompressedAppAssetSizeInBytes; // @synthesize uncompressedAppAssetSizeInBytes=_uncompressedAppAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *compressedAppAssetSizeInBytes; // @synthesize compressedAppAssetSizeInBytes=_compressedAppAssetSizeInBytes;
- (id)description;	// IMP=0x001000000000702d
- (_Bool)setPhaseProportionsForLoadingPhase:(id)arg1 installingPhase:(id)arg2 postProcessingPhase:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000006c3b
@property(readonly, copy, nonatomic) NSDictionary *progressProportionsDictionaryForLaunchServices;
- (unsigned long long)hash;	// IMP=0x0010000000006943
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000640b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006250
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006068
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000005e5e
- (id)init;	// IMP=0x0010000000005e2f

@end


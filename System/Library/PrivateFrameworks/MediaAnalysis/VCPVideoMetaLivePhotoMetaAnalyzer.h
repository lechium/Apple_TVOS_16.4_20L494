//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaLensSwitchAnalyzer, VCPVideoMetaMotionAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaLivePhotoMetaAnalyzer
{
    struct CGVector _prevEstimatedCenterMv;	// 8 = 0x8
    NSMutableData *_deSerializedMetaBuffer;	// 24 = 0x18
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;	// 32 = 0x20
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;	// 40 = 0x28
    unsigned long long _requestAnalyses;	// 48 = 0x30
    NSMutableArray *_metadataStabilizationArray;	// 56 = 0x38
    NSMutableArray *_frameTimestampArray;	// 64 = 0x40
    NSMutableArray *_originalFrameTimestampArray;	// 72 = 0x48
    NSMutableArray *_metadataItemTimestampArray;	// 80 = 0x50
    NSMutableArray *_adjusterArray;	// 88 = 0x58
    NSMutableArray *_interpolatedFrameArray;	// 96 = 0x60
    VCPVideoMetaLensSwitchAnalyzer *_metaLensSwitchAnalzer;	// 104 = 0x68
    _Bool _gyroHomographyIsValid;	// 112 = 0x70
    struct CGSize _gyroHomographyDimension;	// 120 = 0x78
}

+ (id)referenceSoftwareStackVersion;	// IMP=0x00600000001dd9ff
+ (id)defaultDesiredKeys;	// IMP=0x00600000001dd88e
- (void).cxx_destruct;	// IMP=0x00000000001e0c78
- (id)privateResults;	// IMP=0x00000000001e0906
- (int)finalizeAnalysis;	// IMP=0x00000000001e08b1
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;	// IMP=0x00000000001df5eb
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;	// IMP=0x00000000001df42a
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata *)arg1 toDictionary:(id)arg2;	// IMP=0x00000000001deb6a
- (float)compareNumericVersion:(id)arg1 withReferenceVersion:(id)arg2;	// IMP=0x00000000001de764
- (float)compareSoftwareStackVersion:(id)arg1 withReferenceVersion:(id)arg2;	// IMP=0x00000000001de0db
- (struct __CFData *)getFirstAtomWithFourCharCode:(unsigned int)arg1 fromSetupData:(struct __CFData *)arg2;	// IMP=0x00000000001de046
- (struct __CFData *)getSetupDataFrom:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000001de002
- (id)readSoftwareStackVersion:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000001ddf78
- (struct CGSize)readGyroHomographyDimension:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000001dde9e
- (_Bool)gyroHomographyVersionIsValid:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000001dddce
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2;	// IMP=0x00000000001ddb4b
- (id)init;	// IMP=0x00000000001ddb3d

@end


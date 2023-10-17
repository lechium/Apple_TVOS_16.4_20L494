//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;	// IMP=0x00800000000a9b8b
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000aa1d4
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000aa07d
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000aa068
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000000a9cdd
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000a9cac
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000a9c7b
- (void)setPreferredMediaChunkSize:(long long)arg1;	// IMP=0x00000000000a9c4a
- (void)setPreferredMediaChunkAlignment:(long long)arg1;	// IMP=0x00000000000a9c19
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a9bee
- (void)setSourcePixelBufferAttributes:(id)arg1;	// IMP=0x00000000000a9bbd
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000a9bab
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;	// IMP=0x00000000000a9b5c
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000a9b2d
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000a9afe
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000a9acd
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000a9a98
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000a9a69
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000a99a1
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000a98d9
- (_Bool)_validateLanguageCode:(id)arg1;	// IMP=0x00000000000a9864
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00000000000a9822
- (void)setMaximizePowerEfficiency:(_Bool)arg1;	// IMP=0x00000000000a97f3
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;	// IMP=0x00000000000a97c4
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000a96fa
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000a96c9
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000a969e
- (long long)status;	// IMP=0x00000000000a9696
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000000a9465
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a931e

@end


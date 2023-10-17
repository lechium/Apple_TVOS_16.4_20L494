//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAudioSettingsValueConstrainer : NSObject
{
    struct AudioStreamBasicDescription _inputASBD;	// 8 = 0x8
    struct AudioStreamBasicDescription _outputASBD;	// 48 = 0x30
    struct OpaqueAudioConverter *_audioConverter;	// 88 = 0x58
    unsigned int _outputDataRate;	// 96 = 0x60
    _Bool _needNewConverter;	// 100 = 0x64
    _Bool _needAvailableSampleRates;	// 101 = 0x65
    _Bool _needApplicableParameters;	// 102 = 0x66
    NSArray *_availableOutputSampleRates;	// 104 = 0x68
    NSMutableArray *_availableOutputDataRates;	// 112 = 0x70
    NSMutableArray *_applicableOutputSampleRatesForDataRate;	// 120 = 0x78
    NSMutableArray *_applicableOutputDataRatesForSampleRate;	// 128 = 0x80
}

- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;	// IMP=0x0000000000115f04
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;	// IMP=0x0000000000115dac
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;	// IMP=0x0000000000115a69
@property(nonatomic) unsigned int outputDataRate;
@property(nonatomic) unsigned int outputChannelCount;
@property(nonatomic) unsigned int outputBitsPerChannel;
@property(nonatomic) unsigned int outputFormatFlags;
@property(nonatomic) unsigned int outputFormat;
@property(nonatomic) float outputSampleRate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;	// IMP=0x000000000011599e
- (void)_bringUpToDate;	// IMP=0x00000000001158e6
- (id)_fetchApplicableOutputDataRates;	// IMP=0x0000000000115847
- (void)_buildApplicableDataRatesForSampleRates;	// IMP=0x00000000001152a3
- (void)_buildAvailableSampleRates;	// IMP=0x000000000011516a
- (void)_buildAudioConverter;	// IMP=0x00000000001150a2
- (void)dealloc;	// IMP=0x0000000000115039
- (id)init;	// IMP=0x0000000000114fde

@end


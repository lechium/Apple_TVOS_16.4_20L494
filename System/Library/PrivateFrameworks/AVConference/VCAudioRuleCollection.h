//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioRuleCollection : NSObject
{
    NSMutableArray *_rules;	// 8 = 0x8
    int _deviceRole;	// 16 = 0x10
    _Bool _allowAudioSwitching;	// 20 = 0x14
    _Bool _allowAudioRecording;	// 21 = 0x15
    int _aacBlockSize;	// 24 = 0x18
    NSMutableArray *_secondaryPayloads;	// 32 = 0x20
}

+ (int)getForcedPayload;	// IMP=0x001000000008d729
@property(nonatomic) int aacBlockSize; // @synthesize aacBlockSize=_aacBlockSize;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;
@property(readonly, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008ddf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008dc16
- (_Bool)isPayloadSupported:(int)arg1;	// IMP=0x000000000008db0c
- (void)clearAudioRules;	// IMP=0x000000000008dad1
- (void)addAudioRules:(id)arg1;	// IMP=0x000000000008d9cd
- (void)addAudioRule:(id)arg1;	// IMP=0x000000000008d93b
- (void)setRules:(id)arg1;	// IMP=0x000000000008d8ed
- (void)setupAudioRulesWithSBR:(_Bool)arg1 isContinuity:(_Bool)arg2;	// IMP=0x000000000008d4fd
- (void)addAudioPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3;	// IMP=0x000000000008d46c
- (void)dealloc;	// IMP=0x000000000008d3ff
- (id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(_Bool)arg5 sbr:(_Bool)arg6 aacBlockSize:(int)arg7;	// IMP=0x000000000008d22b
- (id)initWithPhoneContinuity:(_Bool)arg1 allowAudioSwitching:(_Bool)arg2 sbr:(_Bool)arg3 aacBlockSize:(int)arg4 isLowLatencyAudio:(_Bool)arg5;	// IMP=0x000000000008d1e3
- (id)initWithPhoneContinuity:(_Bool)arg1 allowAudioSwitching:(_Bool)arg2 sbr:(_Bool)arg3 aacBlockSize:(int)arg4;	// IMP=0x000000000008d182
- (id)init;	// IMP=0x000000000008d103

@end


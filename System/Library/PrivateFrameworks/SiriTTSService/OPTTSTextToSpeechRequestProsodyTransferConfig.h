//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, OPTTSTextToSpeechSpeechFeatureInputWave, OPTTSTextToSpeechUserVoiceProfile;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRequestProsodyTransferConfig : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestProsodyTransferConfig *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001bfd9
- (id)flatbuffData;	// IMP=0x000000000001be97
- (Offset_386ca18f)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001bd48
@property(readonly, nonatomic) NSString *user_voice_profile_url;
@property(readonly, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property(readonly, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bb29
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001b94c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig *)arg2;	// IMP=0x000000000001b936
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b91b
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b903

@end


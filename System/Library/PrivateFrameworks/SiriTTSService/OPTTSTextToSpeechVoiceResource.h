//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechVoiceResource : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechVoiceResource *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019a3d
- (id)flatbuffData;	// IMP=0x00000000000198fb
- (Offset_25ba67b1)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001979d
- (void)data:(CDUnknownBlockType)arg1;	// IMP=0x000000000001972d
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000196a9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000194cc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource *)arg2;	// IMP=0x00000000000194b6
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001949b
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000019483

@end


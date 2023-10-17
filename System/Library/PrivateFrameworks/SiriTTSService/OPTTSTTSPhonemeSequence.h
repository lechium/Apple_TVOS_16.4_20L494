//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSPhonemeSequence : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSPhonemeSequence *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013c7e
- (id)flatbuffData;	// IMP=0x0000000000013b3c
- (Offset_1484d7f9)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000136fb
- (void)word_phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013534
- (unsigned long long)word_phonemes_count;	// IMP=0x000000000001348f
- (id)word_phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000013370
@property(readonly, nonatomic) NSArray *word_phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013246
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000013069
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPhonemeSequence *)arg2;	// IMP=0x0000000000013053
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000013038
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000013020

@end


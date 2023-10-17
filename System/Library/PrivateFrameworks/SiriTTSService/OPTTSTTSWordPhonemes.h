//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSWordPhonemes : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSWordPhonemes *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000012ff8
- (id)flatbuffData;	// IMP=0x0000000000012eb6
- (Offset_9874306f)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000012a61
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012894
- (unsigned long long)phonemes_count;	// IMP=0x00000000000127ef
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000126cf
@property(readonly, nonatomic) NSArray *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000125a5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000123c8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2;	// IMP=0x00000000000123b2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000012397
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001237f

@end

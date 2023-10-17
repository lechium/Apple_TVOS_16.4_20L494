//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRequestExperiment : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestExperiment *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011ccf
- (id)flatbuffData;	// IMP=0x0000000000011b8d
- (Offset_46f492f5)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000011acd
@property(readonly, nonatomic) NSString *experiment_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011a54
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestExperiment *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000011877
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestExperiment *)arg2;	// IMP=0x0000000000011861
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000011846
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001182e

@end


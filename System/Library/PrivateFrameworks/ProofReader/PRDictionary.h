//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLParameterBundle, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface PRDictionary : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSDictionary *_offsetsDictionary;	// 24 = 0x18
    NSDictionary *_numEntriesDictionary;	// 32 = 0x20
    NSDictionary *_dictionariesDictionary;	// 40 = 0x28
    NLParameterBundle *_parameterBundle;	// 48 = 0x30
    NLParameterBundle *_transformerParameterBundle;	// 56 = 0x38
    PRDictionary *_fallbackDictionary;	// 64 = 0x40
}

- (id)transformerParameterBundle;	// IMP=0x00000000000107c2
- (id)parameterBundle;	// IMP=0x00000000000107a1
- (id)fallbackDictionary;	// IMP=0x0000000000010797
- (id)dictionaryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010730
- (_Bool)checkWordBuffer:(char *)arg1 length:(unsigned long long)arg2 encoding:(unsigned int)arg3 index:(unsigned long long)arg4 caseInsensitive:(_Bool)arg5;	// IMP=0x000000000000ffdc
- (void)dealloc;	// IMP=0x000000000000ff6f
- (id)description;	// IMP=0x000000000000ff13
- (id)initWithURL:(id)arg1 fallbackURL:(id)arg2;	// IMP=0x000000000000fae0

@end


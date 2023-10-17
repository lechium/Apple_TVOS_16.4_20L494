//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface VMUSimpleDeserializer
{
    void *_cache;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000044cd2
- (unsigned int *)_deserializeValues:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000044b89
- (const char *)copyDeserializedNullTerminatedBytesWithError:(id *)arg1;	// IMP=0x0000000000044b35
- (id)copyDeserializedStringWithError:(id *)arg1;	// IMP=0x0000000000044aea
- (id)copyDeserializedStringWithID:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000448c0
- (void)skipFields:(unsigned int)arg1;	// IMP=0x00000000000448b4
- (unsigned long long)deserialize64WithError:(id *)arg1;	// IMP=0x000000000004483e
- (unsigned int)deserialize32WithError:(id *)arg1;	// IMP=0x00000000000446dc
- (void)dealloc;	// IMP=0x000000000004467b
- (id)initWithData:(id)arg1;	// IMP=0x000000000004454b

@end

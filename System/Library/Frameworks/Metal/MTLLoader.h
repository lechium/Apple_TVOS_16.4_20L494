//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLLoader : NSObject
{
    void *_global;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_claimQueue;	// 16 = 0x10
    struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> _claims;	// 24 = 0x18
}

+ (_Bool)deserializePipelinesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 reader:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00600000000a473f
+ (_Bool)deserializeObjectFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 reader:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00600000000a4421
+ (_Bool)deserializeHashesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 reader:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00600000000a433d
+ (_Bool)isAIRHeaderExtLoadCommand:(const void *)arg1 headerOffset:(unsigned long long *)arg2 headerSize:(unsigned long long *)arg3;	// IMP=0x00600000000a432a
+ (_Bool)ReadHashTable:(unsigned long long)arg1 begin:(unsigned int)arg2 end:(unsigned int)arg3 hashList:(void *)arg4 reader:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00600000000a3f22
- (id).cxx_construct;	// IMP=0x00000000000ac432
- (void).cxx_destruct;	// IMP=0x00000000000ac424
- (oneway void)dealloc;	// IMP=0x00000000000a7037
- (id)init;	// IMP=0x00000000000a6fad

@end


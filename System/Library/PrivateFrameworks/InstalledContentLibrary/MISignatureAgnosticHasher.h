//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MISignatureAgnosticHasher : NSObject
{
    _Bool _hasNamedSection;	// 8 = 0x8
    int _fd;	// 12 = 0xc
    unsigned int _countOfSlicesWithNamedSection;	// 16 = 0x10
    NSDictionary *_hashes;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSString *_sectionName;	// 40 = 0x28
}

+ (void)unpackPackedCpuTypeAndSubType:(id)arg1 cputype:(int *)arg2 subtype:(int *)arg3;	// IMP=0x00600000000065ae
+ (id)packedNumberForCPUType:(int)arg1 subtype:(int)arg2;	// IMP=0x006000000000658c
- (void).cxx_destruct;	// IMP=0x0000000000006627
@property(nonatomic) unsigned int countOfSlicesWithNamedSection; // @synthesize countOfSlicesWithNamedSection=_countOfSlicesWithNamedSection;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(readonly, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSDictionary *hashes; // @synthesize hashes=_hashes;
@property(readonly, nonatomic) _Bool hasNamedSection; // @synthesize hasNamedSection=_hasNamedSection;
- (_Bool)performHashWithError:(id *)arg1;	// IMP=0x0000000000005bbf
- (id)_hashSliceAtOffset:(long long)arg1 withSize:(long long)arg2 machHeaderAndCommands:(const struct mach_header *)arg3 dictionaryKey:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000004803
- (void)dealloc;	// IMP=0x00000000000047a7
- (id)initWithExecutable:(id)arg1 searchForSectionNamed:(id)arg2;	// IMP=0x0000000000004707

@end


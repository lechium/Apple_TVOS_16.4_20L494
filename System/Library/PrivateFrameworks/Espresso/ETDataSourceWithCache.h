//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithCache : NSObject
{
    id <ETDataSource> _source;	// 8 = 0x8
    struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> _cache;	// 16 = 0x10
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> dump_path;	// 40 = 0x28
    _Bool dump_descriptors;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x00000000005d87f8
- (void).cxx_destruct;	// IMP=0x00000000005d87c3
- (int)numberOfDataPoints;	// IMP=0x00000000005d87ad
- (id)dataPointAtIndex:(int)arg1;	// IMP=0x00000000005d85f5
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;	// IMP=0x00000000005d8523
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000005d8448

@end


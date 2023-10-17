//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ETImageDescriptorExtractor;
@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject
{
    id <ETDataSource> _source;	// 8 = 0x8
    ETImageDescriptorExtractor *_extractor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005d8420
- (int)numberOfDataPoints;	// IMP=0x00000000005d840a
- (id)dataPointAtIndex:(int)arg1;	// IMP=0x00000000005d83a6
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;	// IMP=0x00000000005d82ef

@end


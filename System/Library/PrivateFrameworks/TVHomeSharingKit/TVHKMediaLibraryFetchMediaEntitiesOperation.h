//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaLibraryOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryFetchMediaEntitiesOperation : TVHKMediaLibraryOperation
{
    NSArray *_responses;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000029e61
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
- (void)executionDidBegin;	// IMP=0x0000000000029c4d
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000029bc9
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000000029b5a

@end

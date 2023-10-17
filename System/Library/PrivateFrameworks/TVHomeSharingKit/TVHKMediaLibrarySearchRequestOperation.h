//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaLibraryOperation.h"

@class TVHKMediaEntitiesSearchRequest, TVHKMediaEntitiesSearchResponse;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibrarySearchRequestOperation : TVHKMediaLibraryOperation
{
    TVHKMediaEntitiesSearchResponse *_response;	// 8 = 0x8
    TVHKMediaEntitiesSearchRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b845
@property(copy, nonatomic) TVHKMediaEntitiesSearchRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponse *response; // @synthesize response=_response;
- (void)executionDidBegin;	// IMP=0x000000000003b631
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;	// IMP=0x000000000003b5ad
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000003b53e

@end


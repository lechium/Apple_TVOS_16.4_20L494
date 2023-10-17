//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSArray, NSError, NSPredicate, TVHKMediaEntitiesFetchRequest, TVHKMediaEntitiesFetchResponse;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesFetchOperation : TVHKAsynchronousOperation
{
    _Bool _processRangeAfterFetch;	// 8 = 0x8
    TVHKMediaEntitiesFetchRequest *_request;	// 16 = 0x10
    TVHKMediaEntitiesFetchResponse *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSArray *_postFetchSortDescriptors;	// 40 = 0x28
    NSPredicate *_postFetchPredicate;	// 48 = 0x30
}

+ (id)_propertiesRequiredForManualSortDescriptors:(id)arg1;	// IMP=0x00600000000606a6
+ (id)new;	// IMP=0x0060000000060250
- (void).cxx_destruct;	// IMP=0x0000000000061462
@property(nonatomic) _Bool processRangeAfterFetch; // @synthesize processRangeAfterFetch=_processRangeAfterFetch;
@property(copy, nonatomic) NSPredicate *postFetchPredicate; // @synthesize postFetchPredicate=_postFetchPredicate;
@property(copy, nonatomic) NSArray *postFetchSortDescriptors; // @synthesize postFetchSortDescriptors=_postFetchSortDescriptors;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaEntitiesFetchResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) TVHKMediaEntitiesFetchRequest *request; // @synthesize request=_request;
- (id)_indexBarItemPropertyKey;	// IMP=0x000000000006122e
- (_Bool)_shouldGenerateGroupingIndexBarItems;	// IMP=0x0000000000061182
- (_Bool)_shouldCalculateIndexBarItems;	// IMP=0x000000000006110a
- (_Bool)_shouldCalculateRecentlyAddedMediaEntities;	// IMP=0x0000000000061092
- (id)_groupingsForMediaEntities:(id)arg1 groupingKeyPaths:(id)arg2 indexBarItemPropertyKey:(id)arg3;	// IMP=0x0000000000060d2e
- (id)_recentlyAddedMediaEntitiesForMediaEntities:(id)arg1 mediaEntitySubtype:(unsigned long long)arg2;	// IMP=0x0000000000060c92
- (id)_mediaEntities:(id)arg1 subarrayWithRange:(struct _NSRange)arg2;	// IMP=0x0000000000060bd4
- (id)_processFetchedMediaEntities:(id)arg1;	// IMP=0x000000000006093f
- (id)_mediaEntityPropertyDescriptorCollection;	// IMP=0x00000000000608ce
- (id)_mediaEntityFetchResponseWithResponseType:(unsigned long long)arg1 mediaEntities:(id)arg2 indexBarItems:(id)arg3 deletedMediaEntityIdentifiers:(id)arg4;	// IMP=0x0000000000060385
- (id)_mediaEntityFetchResponseWithMediaEntities:(id)arg1;	// IMP=0x0000000000060368
- (id)_initWithRequest:(id)arg1;	// IMP=0x00000000000602ee
- (id)init;	// IMP=0x000000000006027f

@end

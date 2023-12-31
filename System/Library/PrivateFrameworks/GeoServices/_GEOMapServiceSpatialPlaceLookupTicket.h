//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialPlaceLookupTicket
{
    NSArray *_parameters;	// 304 = 0x130
}

+ (unsigned long long)maxParametersCount;	// IMP=0x001000000074e9b8
- (void).cxx_destruct;	// IMP=0x0000000000750152
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)callCompletion:(CDUnknownBlockType)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;	// IMP=0x000000000074ffce
- (id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2;	// IMP=0x000000000074fc59
- (void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000074f8db
- (id)spatialPlaceLookupResultsFromResponse:(id)arg1;	// IMP=0x000000000074f846
- (void)handleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x000000000074f03d
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 queue:(id)arg3;	// IMP=0x000000000074ea68
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x000000000074ea51
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;	// IMP=0x000000000074e9cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end


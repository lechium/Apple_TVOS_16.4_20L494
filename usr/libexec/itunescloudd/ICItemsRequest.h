//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICItemsRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(_Bool)arg5 includePreorders:(_Bool)arg6;	// IMP=0x00000000000f27ff
+ (id)requestWithDatabaseID:(unsigned int)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(_Bool)arg5;	// IMP=0x00100000000f274c
+ (id)requestWithDatabaseID:(unsigned int)arg1 paginationToken:(id)arg2;	// IMP=0x00100000000f26d9
- (id)_bodyDataForMetadataFilter:(id)arg1 queryFilter:(id)arg2 purchaseTokens:(id)arg3 includeHiddenItems:(_Bool)arg4 includePreorders:(_Bool)arg5 paginationToken:(id)arg6;	// IMP=0x00400000000f22a7
- (double)timeoutInterval;	// IMP=0x00100000000f2299
- (id)initWithDatabaseID:(unsigned int)arg1 metadataFilter:(id)arg2 queryFilter:(id)arg3 purchaseTokens:(id)arg4 includeHiddenItems:(_Bool)arg5 includePreorders:(_Bool)arg6 paginationToken:(id)arg7;	// IMP=0x00100000000f2149

@end


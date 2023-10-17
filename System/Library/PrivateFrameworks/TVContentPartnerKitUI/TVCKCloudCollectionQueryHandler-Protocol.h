//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol TVCKCloudCollectionQueryHandler
- (Class)collectionClass;
- (Class)entityClass;
- (unsigned long long)dmapResponseHeaderCode;
- (NSString *)blankProperty;
- (NSString *)foreignPersistentIDProperty;
- (NSArray *)orderingTermsForProperty:(NSString *)arg1;
@end

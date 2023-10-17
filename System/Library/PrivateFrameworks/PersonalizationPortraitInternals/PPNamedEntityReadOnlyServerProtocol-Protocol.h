//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSString, PPNamedEntityQuery;

@protocol PPNamedEntityReadOnlyServerProtocol <PPFeedbackAccepting>
- (void)mapItemForPlaceName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)namedEntityRecordsWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
@end


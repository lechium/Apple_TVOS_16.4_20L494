//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol FSFFeatureStoreStream;

@protocol FSFFeatureStore
- (_Bool)deleteAllStreams;
- (_Bool)deleteStream:(NSString *)arg1;
- (id <FSFFeatureStoreStream>)getStream:(NSString *)arg1;
@end


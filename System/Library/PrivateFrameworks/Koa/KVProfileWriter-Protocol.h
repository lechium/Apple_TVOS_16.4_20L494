//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Koa/NSObject-Protocol.h>

@class KVDatasetInfo, KVItem, KVProfileInfo, NSOutputStream;

@protocol KVProfileWriter <NSObject>
+ (id)new;
- (_Bool)finishProfile:(id *)arg1;
- (_Bool)finishDataset:(id *)arg1;
- (_Bool)addItem:(KVItem *)arg1 error:(id *)arg2;
- (_Bool)startDataset:(KVDatasetInfo *)arg1 error:(id *)arg2;
- (_Bool)startProfile:(KVProfileInfo *)arg1 error:(id *)arg2;
- (id)initWithOutputStream:(NSOutputStream *)arg1;
- (id)init;
@end


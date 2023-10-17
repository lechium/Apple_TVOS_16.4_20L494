//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSObject-Protocol.h>

@protocol NSTextLocation;

@protocol __NSTextRunStorageDataSource <NSObject>
@property(readonly, getter=isCountableDataSource) _Bool countableDataSource;

@optional
@property(readonly) id <NSTextLocation> baseLocation;
- (long long)offsetFromLocation:(id <NSTextLocation>)arg1 toLocation:(id <NSTextLocation>)arg2;
- (id <NSTextLocation>)locationFromLocation:(id <NSTextLocation>)arg1 withOffset:(long long)arg2;
@end


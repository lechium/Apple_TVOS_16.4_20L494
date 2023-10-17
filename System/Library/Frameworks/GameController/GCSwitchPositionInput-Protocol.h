//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@protocol GCSwitchPositionInput <NSObject>
@property(readonly) double lastPositionLatency;
@property(readonly) double lastPositionTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isSequential) _Bool sequential;
@property(readonly) struct _NSRange positionRange;
@property(readonly) long long position;
@property(copy) CDUnknownBlockType positionDidChangeHandler;
@end

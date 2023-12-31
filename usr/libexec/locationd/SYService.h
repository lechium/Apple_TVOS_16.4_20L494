//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SYService : NSObject
{
    _Bool _changesAvailable;	// 8 = 0x8
    _Bool _suspended;	// 9 = 0x9
    long long _sessionStalenessInterval;	// 16 = 0x10
}

@property(nonatomic) long long sessionStalenessInterval; // @synthesize sessionStalenessInterval=_sessionStalenessInterval;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool changesAvailable; // @synthesize changesAvailable=_changesAvailable;
- (void)resume:(id *)arg1;	// IMP=0x00100000005ef5f8
- (void)suspend;	// IMP=0x00100000005ef5e1
- (void)setHasChangesAvailable;	// IMP=0x00100000005ef5ca
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000005ef5c4
- (id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(_Bool)arg3 options:(id)arg4;	// IMP=0x00100000005ef58a

@end


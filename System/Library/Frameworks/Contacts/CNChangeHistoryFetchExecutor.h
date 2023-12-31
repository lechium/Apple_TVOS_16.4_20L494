//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryFetchExecutor : NSObject
{
    CNChangeHistoryFetchRequest *_request;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x0060000000051de2
- (void).cxx_destruct;	// IMP=0x0000000000053739
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request; // @synthesize request=_request;
- (id)contactLinkingEventsForContacts:(id)arg1 withFactory:(id)arg2;	// IMP=0x0000000000053002
- (id)keysToFetch;	// IMP=0x0000000000052e16
- (id)countOfDeltaSync;	// IMP=0x0000000000052c94
- (id)deltaSync;	// IMP=0x000000000005299c
- (id)fullSync;	// IMP=0x0000000000052458
- (_Bool)validateFetchRequest;	// IMP=0x00000000000523cc
- (id)fetchCount:(id *)arg1;	// IMP=0x0000000000052280
- (id)fetchEvents:(id *)arg1;	// IMP=0x00000000000520af
- (id)run:(id *)arg1;	// IMP=0x0000000000051fd2
- (id)description;	// IMP=0x0000000000051ee6
- (id)initWithRequest:(id)arg1 store:(id)arg2;	// IMP=0x0000000000051e3e

@end


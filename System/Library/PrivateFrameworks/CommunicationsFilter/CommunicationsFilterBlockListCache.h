//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray *_recentItems;	// 8 = 0x8
    int _notifyEmptyListToken;	// 16 = 0x10
    _Bool _listIsEmpty;	// 20 = 0x14
}

- (void)_blockListChanged:(id)arg1;	// IMP=0x0000000000002c85
- (void)syncListEmptyState;	// IMP=0x0000000000002bed
- (void)setResponse:(_Bool)arg1 forItem:(id)arg2;	// IMP=0x000000000000295e
- (void)removeItemFromCache:(id)arg1;	// IMP=0x0000000000002787
- (long long)cachedResponseForItem:(id)arg1;	// IMP=0x000000000000258e
- (id)init;	// IMP=0x0000000000002410

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MPAVRoutingControllerSelection : NSObject
{
    NSArray *_routes;	// 8 = 0x8
    long long _selectionOperation;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f85e
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long selectionOperation; // @synthesize selectionOperation=_selectionOperation;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (id)description;	// IMP=0x000000000007f7ab
- (id)initWithRoutes:(id)arg1 selectionOperation:(long long)arg2;	// IMP=0x000000000007f735

@end


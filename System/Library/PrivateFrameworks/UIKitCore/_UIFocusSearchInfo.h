//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusSearchInfo : NSObject
{
    _Bool _treatFocusableItemAsLeaf;	// 8 = 0x8
    _Bool _forceFocusToLeaveContainer;	// 9 = 0x9
    CDUnknownBlockType _evaluator;	// 16 = 0x10
}

+ (id)defaultInfo;	// IMP=0x0060000000dc1a44
- (void).cxx_destruct;	// IMP=0x0000000000dc1ba3
@property(copy, nonatomic) CDUnknownBlockType evaluator; // @synthesize evaluator=_evaluator;
@property(nonatomic) _Bool forceFocusToLeaveContainer; // @synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer;
@property(nonatomic) _Bool treatFocusableItemAsLeaf; // @synthesize treatFocusableItemAsLeaf=_treatFocusableItemAsLeaf;
- (_Bool)shouldIncludeFocusItem:(id)arg1;	// IMP=0x0000000000dc1adb
- (id)initWithFocusEvaluator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000dc1a6f

@end


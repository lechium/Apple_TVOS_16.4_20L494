//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface NSLayoutConstraintParser : NSObject
{
    NSString *_line;	// 8 = 0x8
    const char *_lineChars;	// 16 = 0x10
    unsigned long long _lineLength;	// 24 = 0x18
    unsigned long long _opts;	// 32 = 0x20
    _Bool _useHorizontalArrangement;	// 40 = 0x28
    NSDictionary *_metrics;	// 48 = 0x30
    NSDictionary *_views;	// 56 = 0x38
    id <NSLayoutItem> _containerView;	// 64 = 0x40
    NSMutableArray *_constraints;	// 72 = 0x48
    NSMutableArray *_unflushedWidthConstraints;	// 80 = 0x50
    NSMutableArray *_alignmentConstraints;	// 88 = 0x58
    unsigned long long _currentCharacter;	// 96 = 0x60
    NSMutableArray *_incompleteConstraints;	// 104 = 0x68
    id <NSLayoutItem> _parsedLeftView;	// 112 = 0x70
    id <NSLayoutItem> _parsedRightView;	// 120 = 0x78
    id <NSLayoutItem> _parsedConstrainedWidthView;	// 128 = 0x80
}

+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x006000000002bb8b
- (void)finishConstraint;	// IMP=0x000000000002cc8c
- (void)findContainerView;	// IMP=0x000000000002cc3c
- (struct _NSRange)rangeOfName;	// IMP=0x000000000002cbd7
- (void)parseOp;	// IMP=0x000000000002ca90
- (double)parseConstant;	// IMP=0x000000000002c8a5
- (void)parsePredicate;	// IMP=0x000000000002c791
- (void)parsePredicateList;	// IMP=0x000000000002c734
- (void)parsePredicateWithParentheses;	// IMP=0x000000000002c694
- (void)parseConnection;	// IMP=0x000000000002c546
- (void)flushWidthConstraints;	// IMP=0x000000000002c50f
- (id)parseView;	// IMP=0x000000000002c2b5
- (void)parse;	// IMP=0x000000000002c014
- (void)failWithDescription:(id)arg1;	// IMP=0x000000000002bf48
- (id)description;	// IMP=0x000000000002bef4
- (id)constraints;	// IMP=0x000000000002be2a
- (void)dealloc;	// IMP=0x000000000002bdbd
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x000000000002bc4a

@end


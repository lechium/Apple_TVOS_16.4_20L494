//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString, UITableView, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject
{
    long long oldSection;	// 8 = 0x8
    long long newSection;	// 16 = 0x10
    long long oldGlobalRow;	// 24 = 0x18
    long long newGlobalRow;	// 32 = 0x20
    UITableView *tableView;	// 40 = 0x28
    struct _NSRange visibleRows;	// 48 = 0x30
    NSArray *updateItems;	// 64 = 0x40
    UITableViewRowData *oldRowData;	// 72 = 0x48
    UITableViewRowData *newRowData;	// 80 = 0x50
    struct _NSRange oldRowRange;	// 88 = 0x58
    struct _NSRange newRowRange;	// 104 = 0x68
    NSMutableIndexSet *movedRows;	// 120 = 0x78
    struct CGRect oldTableViewVisibleBounds;	// 128 = 0x80
    struct CGRect newTableViewVisibleBounds;	// 160 = 0xa0
    struct CGRect tableViewVisibleBoundsUnion;	// 192 = 0xc0
    double tableViewVisibleBoundsOffset;	// 224 = 0xe0
    long long oldSectionCount;	// 232 = 0xe8
    long long newSectionCount;	// 240 = 0xf0
    long long oldGlobalRowCount;	// 248 = 0xf8
    long long newGlobalRowCount;	// 256 = 0x100
    id *animatedCells;	// 264 = 0x108
    id *animatedHeaders;	// 272 = 0x110
    id *animatedFooters;	// 280 = 0x118
    long long globalReorderingRow;	// 288 = 0x120
    id _context;	// 296 = 0x128
    NSMutableArray *viewAnimations;	// 304 = 0x130
    NSMutableArray *deletedSections;	// 312 = 0x138
    NSMutableArray *insertedSections;	// 320 = 0x140
    NSMutableArray *gaps;	// 328 = 0x148
    struct _UIDataSourceUpdateMaps _updateMaps;	// 336 = 0x150
    NSString *_invalidUpdatesErrorMessage;	// 392 = 0x188
}

- (void).cxx_destruct;	// IMP=0x0000000000ecd628
- (void)dealloc;	// IMP=0x0000000000ecd3a0

@end


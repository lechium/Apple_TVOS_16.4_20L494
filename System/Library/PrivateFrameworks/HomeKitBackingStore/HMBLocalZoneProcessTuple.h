//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLQueryTable, HMBLocalZoneProcessModelContext, HMBModel, NSArray, NSData, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneProcessTuple : HMFObject
{
    HMBLocalZoneProcessModelContext *_previousContext;	// 8 = 0x8
    HMBLocalZoneProcessModelContext *_mergedContext;	// 16 = 0x10
    HMBModel *_updateModel;	// 24 = 0x18
    HMBModel *_outputModel;	// 32 = 0x20
    NSNumber *_outputBlockRow;	// 40 = 0x28
    unsigned long long _recordRow;	// 48 = 0x30
    unsigned long long _itemRow;	// 56 = 0x38
    NSData *_externalID;	// 64 = 0x40
    NSUUID *_modelSchema;	// 72 = 0x48
    NSString *_modelType;	// 80 = 0x50
    HMBLocalSQLQueryTable *_queryTable;	// 88 = 0x58
    NSArray *_encodedQueryableColumns;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000009a18
@property(readonly, nonatomic) NSArray *encodedQueryableColumns; // @synthesize encodedQueryableColumns=_encodedQueryableColumns;
@property(readonly, nonatomic) HMBLocalSQLQueryTable *queryTable; // @synthesize queryTable=_queryTable;
@property(readonly, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) NSUUID *modelSchema; // @synthesize modelSchema=_modelSchema;
@property(readonly, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) unsigned long long itemRow; // @synthesize itemRow=_itemRow;
@property(readonly, nonatomic) unsigned long long recordRow; // @synthesize recordRow=_recordRow;
@property(readonly, copy, nonatomic) NSNumber *outputBlockRow; // @synthesize outputBlockRow=_outputBlockRow;
@property(readonly, copy, nonatomic) HMBModel *outputModel; // @synthesize outputModel=_outputModel;
@property(readonly, copy, nonatomic) HMBModel *updateModel; // @synthesize updateModel=_updateModel;
@property(readonly, nonatomic) HMBLocalZoneProcessModelContext *mergedContext; // @synthesize mergedContext=_mergedContext;
@property(readonly, nonatomic) HMBLocalZoneProcessModelContext *previousContext; // @synthesize previousContext=_previousContext;
- (id)initWithPreviousContext:(id)arg1 mergedContext:(id)arg2 updateModel:(id)arg3 outputModel:(id)arg4 outputBlockRow:(id)arg5 recordRow:(unsigned long long)arg6 itemRow:(unsigned long long)arg7 modelSchema:(id)arg8 modelType:(id)arg9 externalID:(id)arg10 queryTable:(id)arg11;	// IMP=0x00000000000096fd

@end


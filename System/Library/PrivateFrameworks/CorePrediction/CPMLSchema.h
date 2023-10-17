//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface CPMLSchema : NSObject
{
    NSMutableArray *schema;	// 8 = 0x8
    NSMutableString *schemaHeader;	// 16 = 0x10
    NSMutableString *schemaHeaderWithType;	// 24 = 0x18
    NSMutableArray *attribute;	// 32 = 0x20
    NSMutableArray *schemaHDef;	// 40 = 0x28
    NSMutableArray *nsRemapTable;	// 48 = 0x30
    NSMutableArray *_categoricalDataList;	// 56 = 0x38
    NSMutableArray *_replaceMissingValue;	// 64 = 0x40
    NSMutableArray *_matchReplaceValue;	// 72 = 0x48
    int yColumnPosition;	// 80 = 0x50
    NSMutableArray *availableOptions;	// 88 = 0x58
    NSMutableArray *_indexColumnList;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000003b61f
@property(readonly, nonatomic) NSMutableArray *indexColumnList; // @synthesize indexColumnList=_indexColumnList;
@property(readonly, nonatomic) NSMutableArray *availableOptions; // @synthesize availableOptions;
@property(readonly, nonatomic) NSMutableArray *nsRemapTable; // @synthesize nsRemapTable;
@property(readonly, nonatomic) NSMutableString *schemaHeaderWithType; // @synthesize schemaHeaderWithType;
@property(readonly, nonatomic) NSMutableString *schemaHeader; // @synthesize schemaHeader;
@property(readonly, nonatomic) NSMutableArray *attribute; // @synthesize attribute;
- (id)getSubstituteValue:(unsigned long long)arg1;	// IMP=0x000000000003b51a
- (_Bool)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2;	// IMP=0x000000000003b49c
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1;	// IMP=0x000000000003b454
- (id)getUserDefinedCategoricalData:(unsigned long long)arg1;	// IMP=0x000000000003b405
- (_Bool)hasOptions:(unsigned long long)arg1;	// IMP=0x000000000003b39a
- (int)getYColumnPosition;	// IMP=0x000000000003b391
- (int)getVectorContent:(unsigned long long)arg1;	// IMP=0x000000000003b294
- (int)getSchemaType:(unsigned long long)arg1;	// IMP=0x000000000003b1f6
- (id)getColumnName:(unsigned long long)arg1;	// IMP=0x000000000003b1e0
- (int)getColumnPosition:(id)arg1;	// IMP=0x000000000003b08b
- (_Bool)isColumnContinous:(unsigned int)arg1;	// IMP=0x000000000003b019
- (_Bool)isVectorType:(unsigned long long)arg1;	// IMP=0x000000000003afca
- (_Bool)isStringType:(unsigned long long)arg1;	// IMP=0x000000000003af27
- (_Bool)isRealType:(unsigned long long)arg1;	// IMP=0x000000000003aed8
- (_Bool)isIntType:(unsigned long long)arg1;	// IMP=0x000000000003ae68
- (_Bool)isNumType:(unsigned long long)arg1;	// IMP=0x000000000003addc
- (unsigned long long)getTotalAttributes;	// IMP=0x000000000003adc6
- (id)initWithPlist:(id)arg1;	// IMP=0x000000000003a356
- (id)init:(id)arg1;	// IMP=0x000000000003a30c

@end


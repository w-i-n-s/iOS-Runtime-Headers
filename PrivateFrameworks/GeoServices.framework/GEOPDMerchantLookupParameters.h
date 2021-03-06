/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int transactionLocationAge : 1; 
        unsigned int transactionTimestamp : 1; 
    } _has;
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    GEOLocation *_transactionLocation;
    double _transactionLocationAge;
    double _transactionTimestamp;
}

@property (nonatomic, readonly) BOOL hasMerchantCode;
@property (nonatomic, readonly) BOOL hasPaymentNetwork;
@property (nonatomic, readonly) BOOL hasRawMerchantCode;
@property (nonatomic, readonly) BOOL hasTransactionLocation;
@property (nonatomic) BOOL hasTransactionLocationAge;
@property (nonatomic) BOOL hasTransactionTimestamp;
@property (nonatomic, retain) NSString *merchantCode;
@property (nonatomic, retain) NSString *paymentNetwork;
@property (nonatomic, retain) NSString *rawMerchantCode;
@property (nonatomic, retain) GEOLocation *transactionLocation;
@property (nonatomic) double transactionLocationAge;
@property (nonatomic) double transactionTimestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMerchantCode;
- (BOOL)hasPaymentNetwork;
- (BOOL)hasRawMerchantCode;
- (BOOL)hasTransactionLocation;
- (BOOL)hasTransactionLocationAge;
- (BOOL)hasTransactionTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)merchantCode;
- (void)mergeFrom:(id)arg1;
- (id)paymentNetwork;
- (id)rawMerchantCode;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTransactionLocationAge:(BOOL)arg1;
- (void)setHasTransactionTimestamp:(BOOL)arg1;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRawMerchantCode:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionLocationAge:(double)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (id)transactionLocation;
- (double)transactionLocationAge;
- (double)transactionTimestamp;
- (void)writeTo:(id)arg1;

@end

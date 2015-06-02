/* Generated by RuntimeBrowser.
 */

@protocol SKUIViewElementView <NSObject>

@required

+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(SKUIViewElement *)arg1 context:(SKUIViewElementLayoutContext *)arg2;
+ (BOOL)prefetchResourcesForViewElement:(SKUIViewElement *)arg1 reason:(int)arg2 context:(SKUIViewElementLayoutContext *)arg3;
+ (void)requestLayoutForViewElement:(SKUIViewElement *)arg1 width:(float)arg2 context:(SKUIViewElementLayoutContext *)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(SKUIViewElement *)arg2 context:(SKUIViewElementLayoutContext *)arg3;

- (void)reloadWithViewElement:(SKUIViewElement *)arg1 width:(float)arg2 context:(SKUIViewElementLayoutContext *)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(UIImage *)arg1 forArtworkRequest:(SKUIArtworkRequest *)arg2 context:(SKUIViewElementLayoutContext *)arg3;
- (BOOL)updateWithItemState:(SKUIItemState *)arg1 context:(SKUIViewElementLayoutContext *)arg2 animated:(BOOL)arg3;
- (UIView *)viewForElementIdentifier:(NSString *)arg1;

@end
//Copyright Defcoin developers 2011-2018


#include <QString>
#include <QColor>

class defcoinIcon;
class themeStyleSheet;
class splashSytle;

class defcoinIcon{
	public:
		// This controls the colors of the main icons inside defcoin. By setting this value or the `bool menu` to false
		// The GUI will use the system color scheme
		bool color = true;
		int red = 200;
		int green = 120;
		int blue = 255;

		// This controls the colors of the drop down menus
		bool menu = true;
		int menuR = 204;
		int menuG = 204;
		int menuB = 204;

		QString ToQString(bool menu){
			QString rgb = "rgb(" + QString::number(red) + ", " + QString::number(green) + ", " + QString::number(blue) + ")";
			if(menu)
				rgb = "rgb(" + QString::number(menuR) + ", " + QString::number(menuG) + ", " + QString::number(menuB) + ")";
			return rgb;
		}

};
class themeStyleSheet{
	defcoinIcon colors;
	public:
		// In these functions you can costomize different parts of the defcoin GUI by adding ccs code to target the
		// Qt elements
		QString loadToolBar(){
			css = "QToolBar { border: 0px; border-bottom: #CCCCCC 1px; }";
			css += "QToolBar, QToolBar QToolButton { background-color: #333333; border-radius: 0px; color: #CCCCCC;}";
		        css += "QToolBar QToolButton {padding: 10px 0 10px 0; }";
	        	css += "QToolBar QToolButton:hover { background-color: #222222; }";
 		        css += "QToolBar QToolButton:checked { background-color: #444444; }";
			return css;
		}
		QString loadMenuBar(){
			css = "";
			return css;
		}
		QString loadPageTheme(){
			css = "QDialog, QFrame, #scrollAreaWidgetContents, QGroupBox {background-color: #444444; color: #CCCCCC;}";
			css += "QStatusBar, QStatusBar QFrame, #helpMessage, QPlainTextEdit {background-color: #333333;}";
			css += "#frame, #frame_2, #frameFee, #scrollArea, #frame2, QGroupBox, #helpMessage, QPlainTextEdit {border: 1px solid #CCCCCC;}";
     		        css += "QGroupBox {margin-top: 25px;}";
                        css += "QGroupBox:title {subcontrol-origin: margin; subcontrol-position: left top;}";
			css += "QWidget QFrame #line {border-top: 1px solid #CCCCCC;}";
			css += "#HelpMessageDialog #frame, #HelpMessageDialog #scrollArea {border: 0;}";
			css += "#ModalOverlay #contentWidget {background-color: #444444; border: 0; color: #cccccc;}";

			css += "QPushButton {background-color: #333333; color: #CCCCCC; border: 1px solid #111111; padding: 2px 5px 2px 5px;}";
			css += "#labelWalletStatus, #labelTransactionsStatus, #addressBookButton_SM, #pasteButton_SM, #copySignatureButton_SM, #addressBookButton_VM, #warningIcon {background-color: #444444; border: 0; padding: 0;}";
			css += "QValidatedLineEdit, QLineEdit, AmountSpinBox, QSpinBox{border-radius: 0px; background-color: #333333; color: #DDDDDD; padding: 5px 0 5px 0;}";
			css += "QValueComboBox, AmountSpinBox, QSpinBox {padding-left:10px; padding-right: 10px;}";
			css += "QValueComboBox, QComboBox {border-radius: 0px; background-color: #333333; color: #CCCCCC; min-height: 29px;}";
			css += "#SendCoins QToolButton {background-color: #444444; border-radius: 0; margin-top: 2px; margin-left: 2px;}";
			css += "QCheckBox, QRadioButton{background-color: #444444; color: #CCCCCC;}";
			css += "QCheckBox:editable, QRadioButton:editable {background-color: #333333;}";
			css += "QWidget #SendCoins QCheckBox {padding-left: 10px;}";

			css += "QComboBox {padding-left: 3px; margin-right: 3px;}";
			css += "AmountSpinBox::up-button, QSpinBox::up-button {border-bottom: 1px solid black;}";
			css += "QComboBox::drop-down, AmountSpinBox::down-button, AmountSpinBox::up-button, QSpinBox::down-button, QSpinBox::up-button {border-left: 1px solid #111111;}";
			css += "AmountSpinBox::up-arrow, QSpinBox::up-arrow {image: url(:/icons/up_arrow); width: 10px;}";
			css += "QComboBox::down-arrow, AmountSpinBox::down-arrow, QSpinBox::down-arrow { image: url(:/icons/down_arrow); width: 10px;}";

			css += "QTableView {border: 1px solid #CCCCCC; alternate-background-color: #404040;}";
			css += "QTableView QHeaderView::section {border: 1px solid #222222; border-left: 0; border-top: 0; background-color: #333333; padding: 5px;}";
			css += "QTableView::section {border: 10px solid red; border-top: 0;}";
			css += "QTableView::item:selected {background-color: #666666; color: white;}";

			css += "QProgressBar {background-color: #222222; border-radius: 0px; border: 0px; color: #CCCCCC}";
			if(colors.color)
				css += "QProgressBar::chunk {background: " + colors.ToQString(false) + ";}";
			css += "QProgressBar::chunk {border-radius: 0px; border: 0px;}";
			css += "QStatusBar {color: #CCCCCC;}";
                        css += "QStatusBar::item {border: 0;}";

			css += "*:!enabled {color: #666666;}";
			css += "QPushButton:!enabled {border-color: #333333; background-color: #353535;}";
			css += "QComboBox::drop-down:!enabled, AmountSpinBox::up-button:!enabled, AmountSpinBox::down-button:!enabled, QSpinBox::up-button:!enabled, QSpinBox::down-button:!enabled {border-color: #252525;}";
			css += "AmountSpinBox::up-arrow:!enabled, QSpinBox::up-arrow:!enabled {image: url(:/icons/disabled_up_arrow);}";
			css += "QComboBox::down-arrow:!enabled, AmountSpinBox::down-arrow:!enabled, QSpinBox::down-arrow:!enabled {image: url(:/icons/disabled_down_arrow);}";

			return css;
		}
		QString debugTheme(){
			css = loadPageTheme();

			css += "#RPCConsole {background-color: #444444;}";
			css += "QTabWidget {background-color: #cccccc; border: 5px solid red;}";
			css += "#clearButton, #fontBiggerButton, #fontSmallerButton, #promptIcon {background-color: #444444; border: 0; padding: 0;}";
			css += "#groupBox #line {border-top: 1px solid #00FF00;}";
			css += "#groupBox #line_2 {border-top: 1px solid #FF0000;}";
			css += "#messagesWidget {background-color: #333333; border: 1px solid #cccccc;}";

			return css;
		}
		QString rpcErrorColor = "red";
		QString rpcCommandColor = colors.ToQString(false);
		QString rpcTimeColor = "#DDDDDD";
		
		QString loadBitcoinTheme(){
			css = loadToolBar() + loadMenuBar() + loadPageTheme();
			return css;
		}
	private:
		QString css;
};
class splashStyle{
		defcoinIcon colors;

	public:
		QColor penColor = QColor(colors.red,colors.green,colors.blue);
		QColor ColorOne = Qt::black;
		QColor ColorTwo = QColor(51,51,51);
};

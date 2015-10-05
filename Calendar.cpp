#include "Calendar.h"
using namespace std;

Calendar::Calendar() {}

void Calendar::fill()
{
	fillJanuary();
	fillFebruary();
	fillMarch();
	fillApril();
	fillMay();
	fillJune();
	fillJuly();
	fillAugust();
	fillSeptember();
	fillOctober();
	fillNovember();
	fillDecember();	
}

void Calendar::fillJanuary()
{
	//january.insert(begin(january), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});

	january.insert(begin(january), initializer_list<int>{1,2,3,4,5,6,7,8,9,10});
}

void Calendar::fillFebruary()
{
	february.insert(begin(february), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29});
}

void Calendar::fillMarch()
{
	march.insert(begin(march), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});
}

void Calendar::fillApril()
{
	april.insert(begin(april), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30});
}

void Calendar::fillMay()
{
	may.insert(begin(may), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});
}

void Calendar::fillJune()
{
	june.insert(begin(june), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30});
}

void Calendar::fillJuly()
{
	july.insert(begin(july), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});
}

void Calendar::fillAugust()
{
	august.insert(begin(august), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});
}

void Calendar::fillSeptember()
{
	september.insert(begin(september), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30});
}

void Calendar::fillOctober()
{
	october.insert(begin(october), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});	
}

void Calendar::fillNovember()
{
	november.insert(begin(november), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30});
}

void Calendar::fillDecember()
{
	december.insert(begin(december), initializer_list<int>{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31});
}

void Calendar::removeJanuaryDate(const int Date)
{
	january.erase(remove_if(january.begin(), january.end(), [Date] (const auto & _date) {return Date==_date;}), january.end());
}

void Calendar::removeFebruaryDate(const int Date)
{
	february.erase(remove_if(february.begin(), february.end(), [Date] (const auto & _date) {return Date==_date;}), february.end());
}

void Calendar::removeMarchDate(const int Date)
{
	march.erase(remove_if(march.begin(), march.end(), [Date] (const auto & _date) {return Date==_date;}), march.end());
}

void Calendar::removeAprilDate(const int Date)
{
	april.erase(remove_if(april.begin(), april.end(), [Date] (const auto & _date) {return Date==_date;}), april.end());
}

void Calendar::removeMayDate(const int Date)
{
	may.erase(remove_if(may.begin(), may.end(), [Date] (const auto & _date) {return Date==_date;}), may.end());
}

void Calendar::removeJuneDate(const int Date)
{
	june.erase(remove_if(june.begin(), june.end(), [Date] (const auto & _date) {return Date==_date;}), june.end());
}

void Calendar::removeJulyDate(const int Date)
{
	july.erase(remove_if(july.begin(), july.end(), [Date] (const auto & _date) {return Date==_date;}), july.end());
}

void Calendar::removeAugustDate(const int Date)
{
	august.erase(remove_if(august.begin(), august.end(), [Date] (const auto & _date) {return Date==_date;}), august.end());
}

void Calendar::removeSeptemberDate(const int Date)
{
	september.erase(remove_if(september.begin(), september.end(), [Date] (const auto & _date) {return Date==_date;}), september.end());
}

void Calendar::removeOctoberDate(const int Date)
{
	october.erase(remove_if(october.begin(), october.end(), [Date] (const auto & _date) {return Date==_date;}), october.end());
}

void Calendar::removeNovemberDate(const int Date)
{
	november.erase(remove_if(november.begin(), november.end(), [Date] (const auto & _date) {return Date==_date;}), november.end());
}

void Calendar::removeDecemberDate(const int Date)
{
	december.erase(remove_if(december.begin(), december.end(), [Date] (const auto & _date) {return Date==_date;}), december.end());
}

bool Calendar::isJanuaryFull()
{
	if(january.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isFebruaryFull()
{
	if(february.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isMarchFull()
{
	if(march.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isAprilFull()
{
	if(april.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isMayFull()
{
	if(may.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isJuneFull()
{
	if(june.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isJulyFull()
{
	if(july.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isAugustFull()
{
	if(august.size()==0)
	{
		return true;
	}
	return false;
}
bool Calendar::isSeptemberFull()
{
	if(september.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isOctoberFull()
{
	if(october.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isNovemberFull()
{
	if(november.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::isDecemberFull()
{
	if(december.size()==0)
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInJanuary(const int Date)
{
	auto foundDate=find(january.begin(), january.end(), Date);

	if(foundDate!=january.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInFebruary(const int Date)
{
	auto foundDate=find(february.begin(), february.end(), Date);

	if(foundDate!=february.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInMarch(const int Date)
{
	auto foundDate=find(march.begin(), march.end(), Date);

	if(foundDate!=march.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInApril(const int Date)
{
	auto foundDate=find(april.begin(), april.end(), Date);

	if(foundDate!=april.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInMay(const int Date)
{
	auto foundDate=find(may.begin(), may.end(), Date);

	if(foundDate!=may.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInJune(const int Date)
{
	auto foundDate=find(june.begin(), june.end(), Date);

	if(foundDate!=june.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInJuly(const int Date)
{
	auto foundDate=find(july.begin(), july.end(), Date);

	if(foundDate!=july.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInAugust(const int Date)
{
	auto foundDate=find(august.begin(), august.end(), Date);

	if(foundDate!=august.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInSeptember(const int Date)
{
	auto foundDate=find(september.begin(), september.end(), Date);

	if(foundDate!=september.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInOctober(const int Date)
{
	auto foundDate=find(october.begin(), october.end(), Date);

	if(foundDate!=october.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInNovember(const int Date)
{
	auto foundDate=find(november.begin(), november.end(), Date);

	if(foundDate!=november.end())
	{
		return true;
	}
	return false;
}

bool Calendar::dateExistsInDecember(const int Date)
{
	auto foundDate=find(december.begin(), december.end(), Date);

	if(foundDate!=december.end())
	{
		return true;
	}
	return false;
}

auto Calendar::getJanuary() const
{
	return january;
}

auto Calendar::getFebruary() const
{
	return february;
}

auto Calendar::getMarch() const
{
	return march;
}

auto Calendar::getApril() const
{
	return april;
}

auto Calendar::getMay() const
{
	return may;
}

auto Calendar::getJune() const
{
	return june;
}

auto Calendar::getJuly() const
{
	return july;
}

auto Calendar::getAugust() const
{
	return august;
}

auto Calendar::getSeptember() const
{
	return september;
}

auto Calendar::getOctober() const
{
	return october;
}

auto Calendar::getNovember() const
{
	return november;
}

auto Calendar::getDecember() const
{
	return december;
}
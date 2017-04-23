#include "../include/kenobet.h"
#include "../include/game.h"

 /*! Adiciona os números válidos à aposta.*/
bool KenoBet::add_number (number_type value){

	if ( value >= Game::MIN_SPOT && value <= Game::MAX_SPOT )
	{
		m_spots.push_back(value);
        std::sort(m_spots.begin(), m_spots.end());
		return true;
	}
	else
		return false;
}

/*! Recupera quantidade de números apostados. */
std::size_t KenoBet::size () const{
    return m_spots.size();
}

/*! Configura o valor da aposta.*/
bool KenoBet::set_wage (cash_type value){
   
    if ( value < Game::MIN_WAGE || value > Game::MAX_WAGE ) return false;
    else m_cash = value;

    return true;
}

/*! Recupera o valor da aposta.*/
cash_type KenoBet::get_wage () const{
    return m_cash;
}

/*! Verifica a interseção entre os números sorteados e os da aposta. */
set_of_bets KenoBet::get_hits( const set_of_bets & hits_ ) const{
    return m_spots; //stub
}

/*! Recupera o vetor com os números que o jogador apostou. */
set_of_bets KenoBet::get_spots( ) const{
    return m_spots;
}

